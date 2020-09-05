#!/usr/bin/python3
import unittest
from models.base import Base

class Test_Base(unittest.TestCase):

    def setUp(self):
        Base._Base__nb_objects = 0

    def test_nbobjects(self):
        """ test to see if id is set correctly
        """
        a = Base(69)
        self.assertEqual(a.id, 69)
        a.id += 1
        self.assertEqual(a.id, 70)

    def test_nbobject_none(self):
        """ test to see if no arguments or None is processed correctly
        """
        a = Base()
        self.assertEqual(a.id, 1)
        b = Base()
        self.assertEqual(b.id, 2)
        c = Base(None)
        self.assertEqual(c.id, 3)

    def test_wumbo(self):
        """ test that is combination of test_nbobjects and test_nbobject_none
        """
        a = Base()
        self.assertEqual(a.id, 1)
        b = Base()
        self.assertEqual(b.id, 2)
        c = Base(69)
        self.assertEqual(c.id, 69)
        d = Base()
        self.assertEqual(d.id, 3)
        e = Base()
        self.assertEqual(e.id, 4)

    def test_argOverload(self):
        """ test that catches TypeError exception by inputting excess arguments
        """
        with self.assertRaises(TypeError, msg="__init__() takes from 1 to 2 positional arguments but 6 were given"):
            Base(1, 1, 1, 1, 1)

    def test_string(self):
        """ test that sets id as a string
        """
        a = Base("fusrodah")
        self.assertEqual(a.id, "fusrodah")

    def test_list(self):
        """ test that sets id as a list
        """
        a = Base([1, 2, 3])
        self.assertEqual(a.id, [1, 2, 3])
