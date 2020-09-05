#!/usr/bin/python3
"""This is the base model class for AirBnB"""
import uuid
import models
from datetime import datetime
import sqlalchemy
from sqlalchemy import Column, Integer, String, DateTime
from sqlalchemy.ext.declarative import declarative_base

Base = declarative_base()


class BaseModel:
    """This class will defines all common attributes/methods
    for other classes
    """

    id = Column(String(60), nullable=False, unique=True, primary_key=True)
    created_at = Column(DateTime, nullable=False, default=datetime.utcnow())
    updated_at = Column(DateTime, nullable=False, default=datetime.utcnow())

    def __init__(self, *args, **kwargs):
        """Instantiation of base model class
        Args:
            args: it won't be used
            kwargs: arguments for the constructor of the BaseModel
        Attributes:
            id: unique id generated
            created_at: creation date
            updated_at: updated date
        """
        if kwargs:
            for key, val in kwargs.items():
                if key == 'created_at':
                    time = datetime.strptime(val, "%Y-%m-%dT%H:%M:%S.%f")
                    setattr(self, key, time)
                elif key == 'updated_at':
                    time = datetime.strptime(val, "%Y-%m-%dT%H:%M:%S.%f")
                    setattr(self, key, time)
                elif key != '__class__':
                    setattr(self, key, val)
            if 'created_at' not in kwargs.keys():
                self.created_at = datetime.now()
            if 'updated_at' not in kwargs.keys():
                self.updated_at = datetime.now()
            if 'id' not in kwargs.keys():
                self.id = str(uuid.uuid4())
        else:
            self.id = str(uuid.uuid4())
            self.created_at = self.updated_at = datetime.now()

        # if kwargs:
        #     for key, value in kwargs.items():
        #         if (key == "created_at" or key == "updated_at") \
        #            and (key != "__class__"):
        #             time = datetime.strptime(value, "%Y-%m-%dT%H:%M:%S.%f")
        #             setattr(self, key, time)
        #         if (key != "created_at" and key != "updated_at") \
        #            and (key != "__class__"):
        #             setattr(self, key, value)
        #     print("\n\n\ngot here\n\n\n")
        # else:
        #     self.id = str(uuid.uuid4())
        #     self.created_at = self.updated_at = datetime.now()

    def __str__(self):
        """returns a string
        Return:
            returns a string of class name, id, and dictionary
        """
        a_dict = self.to_dict()
        if '__class__' in a_dict:
            del a_dict['__class__']
        return "[{}] ({}) {}".format(
            type(self).__name__, self.id, a_dict)

    def __repr__(self):
        """return a string representaion
        """
        return self.__str__()

    def save(self):
        """updates the public instance attribute updated_at to current
        """
        self.updated_at = datetime.now()
        models.storage.new(self)
        models.storage.save()

    def to_dict(self):
        """creates dictionary of the class  and returns
        Return:
            returns a dictionary of all the key values in __dict__
        """
        my_dict = dict(self.__dict__.copy())
        my_dict["__class__"] = str(type(self).__name__)
        try:
            my_dict["created_at"] = self.created_at.isoformat()
        except AttributeError:
            pass
        try:
            my_dict["updated_at"] = self.updated_at.isoformat()
        except AttributeError:
            pass
        if '_sa_instance_state' in my_dict:
            my_dict.pop('_sa_instance_state')
        return my_dict

    def delete(self):
        models.storage.delete(self)
