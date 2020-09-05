#!/usr/bin/python3
'''Grabs top 10 hottest posts from subreddit'''
import requests


def top_ten(subreddit):
    res = requests.get('https://www.reddit.com/r/{}/'.format(subreddit),
                       allow_redirects=False)

    if res.status_code == 404:
        print(None)
        return

    user_agents = ['rockstar331', 'awesomedude0', 'fantafanatic',
                   'iluvchimachangas', 'The Monkey', 'aznname',
                   'tarragonbasically', 'drierbummer', 'framingmud',
                   'tokyoriddled', 'blunthacking', 'californiumchild',
                   'massagerjuicy', 'fipsyum', 'obtainotter',
                   'Tranect', 'Virgule', 'Ultradian', 'Aardwolf',
                   'Moocher', 'Calabash', 'Tomkat1Burgoo', 'oobleck',
                   'Ghostwriter', 'Hullabaloo', 'Panjandrum', 'Mnemonic']

    payload = {'limit': 10, 'sort': 'hot'}

    for user_agent in user_agents:
        res = requests.get('https://www.reddit.com/r/{}/hot/.json'.format
                           (subreddit), headers={'User-Agent': user_agent},
                           params=payload,
                           allow_redirects=False)
        if (res.status_code != 429):
            break
        if user_agent == 'Mnemonic':
            return 0

    for key, val in res.json()['data'].items():
        if key == 'children':
            for obj in val:
                print(obj['data']['title'])
