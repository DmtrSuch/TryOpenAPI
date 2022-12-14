# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from swagger_server.models.base_model_ import Model
from swagger_server.models.addres_peoples import AddresPeoples  # noqa: F401,E501
from swagger_server import util


class AddunitBody(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """
    def __init__(self, city: str=None, street: str=None, peoples: List[AddresPeoples]=None):  # noqa: E501
        """AddunitBody - a model defined in Swagger

        :param city: The city of this AddunitBody.  # noqa: E501
        :type city: str
        :param street: The street of this AddunitBody.  # noqa: E501
        :type street: str
        :param peoples: The peoples of this AddunitBody.  # noqa: E501
        :type peoples: List[AddresPeoples]
        """
        self.swagger_types = {
            'city': str,
            'street': str,
            'peoples': List[AddresPeoples]
        }

        self.attribute_map = {
            'city': 'city',
            'street': 'street',
            'peoples': 'peoples'
        }
        self._city = city
        self._street = street
        self._peoples = peoples

    @classmethod
    def from_dict(cls, dikt) -> 'AddunitBody':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The addunit_body of this AddunitBody.  # noqa: E501
        :rtype: AddunitBody
        """
        return util.deserialize_model(dikt, cls)

    @property
    def city(self) -> str:
        """Gets the city of this AddunitBody.


        :return: The city of this AddunitBody.
        :rtype: str
        """
        return self._city

    @city.setter
    def city(self, city: str):
        """Sets the city of this AddunitBody.


        :param city: The city of this AddunitBody.
        :type city: str
        """

        self._city = city

    @property
    def street(self) -> str:
        """Gets the street of this AddunitBody.


        :return: The street of this AddunitBody.
        :rtype: str
        """
        return self._street

    @street.setter
    def street(self, street: str):
        """Sets the street of this AddunitBody.


        :param street: The street of this AddunitBody.
        :type street: str
        """

        self._street = street

    @property
    def peoples(self) -> List[AddresPeoples]:
        """Gets the peoples of this AddunitBody.


        :return: The peoples of this AddunitBody.
        :rtype: List[AddresPeoples]
        """
        return self._peoples

    @peoples.setter
    def peoples(self, peoples: List[AddresPeoples]):
        """Sets the peoples of this AddunitBody.


        :param peoples: The peoples of this AddunitBody.
        :type peoples: List[AddresPeoples]
        """

        self._peoples = peoples
