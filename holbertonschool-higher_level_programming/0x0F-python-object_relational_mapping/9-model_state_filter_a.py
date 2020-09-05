#!/usr/bin/python3
import sqlalchemy as db
from sqlalchemy.orm import sessionmaker
from model_state import Base, State
import sys

if __name__ == "__main__":
    engine = db.create_engine('mysql+mysqldb://{}:{}@localhost/{}'.format(
        sys.argv[1], sys.argv[2], sys.argv[3]), pool_pre_ping=True)
    Session = sessionmaker(bind=engine)
    session = Session()

    for state in session.query(State).filter(
            State.name.contains("a")).order_by(State.id).all():
        print("{}: {}".format(state.id, state.name))
    session.close()
