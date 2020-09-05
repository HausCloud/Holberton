#!/usr/bin/python3
"""Python script that sends a search request to Star Wars API"""


if __name__ == "__main__":
    import requests
    import sys

    API_ENDPOINT = 'https://swapi.co/api/people/?search={}'.format(sys.argv[1])

    char_list = []
    count = 0

    req = requests.get(API_ENDPOINT)
    character_list = req.json()['results'].copy()
    for char in character_list:
        char_list.append(char['name'])
        count += 1

    print('Number of results: {}'.format(count))
    for i in char_list:
        print(i)
