#!/usr/bin/python3
"""Display ID using http requests"""


if __name__ == "__main__":
    import requests
    import sys

    req = requests.get('https://api.github.com/user',
                       auth=requests.auth.HTTPBasicAuth(sys.argv[1], sys.argv[2]))
    if req.status_code == 200:
        print(req.json()['id'])
    else:
        print(None)
