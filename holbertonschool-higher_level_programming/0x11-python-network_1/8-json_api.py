#!/usr/bin/python3
"""Python script that takes a letter
and sends a POST request to http://0.0.0.0:5000/search_user"""

if __name__ == "__main__":
    import requests
    import sys

    try:
        q = sys.argv[1]
    except IndexError:
        q = ""

    payload = {'q': q}

    req = requests.post('http://0.0.0.0:5000/search_user', data=payload)
    try:
        users = req.json()
    except ValueError:
        print('Not a valid json')

    if len(users) == 0:
        print('No result')
    else:
        print('[{}] {}'.format(users['id'], users['name']))
