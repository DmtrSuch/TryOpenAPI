import connexion
import six

from swagger_server.models.addunit_body import AddunitBody  # noqa: E501
from swagger_server.models.inline_response200 import InlineResponse200  # noqa: E501
from swagger_server import util


def addres_get():  # noqa: E501
    """addres_get

    Get all addres # noqa: E501


    :rtype: List[InlineResponse200]
    """
    return 'do some magic!'


def addunit_put(body=None):  # noqa: E501
    """addunit_put

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: None
    """
    if connexion.request.is_json:
        body = AddunitBody.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def alldel_delete():  # noqa: E501
    """alldel_delete

    del all units # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def deleteuserforname_adname_delete(adname):  # noqa: E501
    """deleteuserforname_adname_delete

     # noqa: E501

    :param adname: The name to delete
    :type adname: str

    :rtype: None
    """
    return 'do some magic!'
