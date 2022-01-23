from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import argparse
import time
import os


# cli args

parser = argparse.ArgumentParser()

parser.add_argument("-username", help="prvoide your username")
parser.add_argument("-password", help="provide your password")
args = parser.parse_args()


# init driver

driver = webdriver.Chrome()


# pass login page
login_page = driver.get(
    "https://leetcode.com/accounts/login/?next=/submissions/#/1")

username = driver.find_element_by_id('id_login')
password = driver.find_element_by_id('id_password')

username.send_keys(args.username)
password.send_keys(args.password)

time.sleep(1)
driver.find_element_by_id('signin_btn').click()


# scrape all valid solutions

how_many_sol = {}  # to track if there is more than one solutin
links = []      # to scrape all links in the page
finished_flag = False   # to stop iterating

# to do : add more languages
languages = {
    "python": ".py", "cpp": ".cpp", "java": ".java"
}


# create and save file for speicific submission

def get_submission(pname, link, lang):
    driver.get(link)
    text = driver.find_element_by_class_name("ace_text-layer").text
    ext = languages[lang]
    filename = pname+ext

    if filename in how_many_sol:
        how_many_sol[filename] = how_many_sol.get(filename, 0)+1
        filename = pname+str(how_many_sol[filename])+ext

    else:
        filename = pname+ext
        how_many_sol[filename] = how_many_sol.get(filename, 0)+1

    with open(filename, "w+") as file:
        file.write(text)
        driver.back()


# save all accepted sols in links array

def scrape_links(id=1):
    global finished_flag
    driver.get('https://leetcode.com/submissions/#/'+str(id))
    time.sleep(3)

    subs = driver.find_elements_by_tag_name("tr")

    if len(subs) == 0:
        finished_flag = True
    for i in subs[1:]:
        recs = i.find_elements_by_tag_name('td')
        problem_name = recs[1].text
        status = recs[2].text
        sol_link = recs[2].find_element_by_tag_name('a').get_attribute('href')
        lang = recs[4].text
        if status == 'Accepted':
            links.append((status, problem_name, sol_link, lang))


# loop over all links scrapte their submissions

def scrape_valid_sol():
    for link in links:
        status, problem_name, sol_link, lang = link
        get_submission(problem_name, sol_link, lang)
        time.sleep(1)


i = 1
while not finished_flag:
    time.sleep(5)
    scrape_links(id=i)
    scrape_valid_sol()
    links = []
    i += 1

driver.close()
