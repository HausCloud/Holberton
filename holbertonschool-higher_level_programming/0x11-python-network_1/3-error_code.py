#!/usr/bin/python3
""" Send request to URL http://0.0.0.0:5000 within container"""

if __name__ == "__main__":
    import urllib.request
    import sys

    try:
        with urllib.request.urlopen(sys.argv[1]) as response:
            content = response.read()
            print(content.decode('utf-8'))
    except urllib.error.HTTPError as errcode:
        print("Error code: {}".format(errcode.code))
