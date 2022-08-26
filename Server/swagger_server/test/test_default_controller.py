# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from swagger_server.models.addunit_body import AddunitBody  # noqa: E501
from swagger_server.models.inline_response200 import InlineResponse200  # noqa: E501
from swagger_server.test import BaseTestCase


class TestDefaultController(BaseTestCase):
    """DefaultController integration test stubs"""

    def test_addres_get(self):
        """Test case for addres_get

        
        """
        response = self.client.open(
            '/addres',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_addunit_put(self):
        """Test case for addunit_put

        
        """
        body = AddunitBody()
        response = self.client.open(
            '/addunit',
            method='PUT',
            data=json.dumps(body),
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_alldel_delete(self):
        """Test case for alldel_delete

        
        """
        response = self.client.open(
            '/alldel',
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_deleteuserforname_adname_delete(self):
        """Test case for deleteuserforname_adname_delete

        
        """
        response = self.client.open(
            '/deleteuserforname/{adname}'.format(adname='adname_example'),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
