#!/usr/bin/python3
import MySQLdb
import sys
import re

if __name__ == "__main__":
    db = MySQLdb.connect(user=sys.argv[1], passwd=sys.argv[2],
                         db=sys.argv[3])
    cursor = db.cursor()
    cursor.execute("SELECT cities.name FROM cities INNER JOIN states ON \
                  cities.state_id=states.id WHERE states.name LIKE %s \
                  ORDER BY cities.id ASC", [sys.argv[4]])
    rows = cursor.fetchall()
    cnt = 0
    for i in rows:
        if cnt != (len(rows) - 1):
            print(i[0], end=', ')
            cnt += 1
        else:
            print(i[0], end='')
    print()
    cursor.close()
    db.close()
