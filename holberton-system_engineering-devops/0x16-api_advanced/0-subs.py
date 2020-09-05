#!/usr/bin/python3
'''Grabs number of subscribers from subreddit'''
import requests


def number_of_subscribers(subreddit):
    res = requests.get('https://www.reddit.com/r/{}/'.format(subreddit),
                       allow_redirects=False)

    if res.status_code == 404:
        return 0

    user_agents = ['rockstar331', 'awesomedude0', 'fantafanatic',
                   'iluvchimachangas', 'The Monkey', 'aznname',
                   'tarragonbasically', 'drierbummer', 'framingmud',
                   'tokyoriddled', 'blunthacking', 'californiumchild',
                   'massagerjuicy', 'fipsyum', 'obtainotter',
                   'Tranect', 'Virgule', 'Ultradian', 'Aardwolf',
                   'Moocher', 'Calabash', 'Tomkat1Burgoo', 'oobleck',
                   'Ghostwriter', 'Hullabaloo', 'Panjandrum', 'Mnemonic']

    for user_agent in user_agents:
        res = requests.get('https://www.reddit.com/r/{}/about/.json'.format
                           (subreddit),
                           {'User-Agent': user_agent}, allow_redirects=False)
        if (res.status_code != 429):
            break
        if user_agent == 'Mnemonic':
            return 0

    for key, val in res.json()['data'].items():
        if key == 'subscribers':
            return val
