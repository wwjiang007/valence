.. -*- rst -*-

==================
Pooled Resources
==================

List, Searching of Pooled resources are done through the ``/v1/pooled``

List Pooled Resources
======================

.. rest_method::  GET /v1/pooled/

Return a list of Pooled Resources, this list generated by Valence controller from resource pool.
By default, this query will return resources object with the uuid and group_id.

Normal response codes: 200

Error response codes: badRequest(400), unauthorized(401), forbidden(403)

Request
-------

Response
--------

.. rest_parameters:: parameters.yaml

    - pooled_group_id: pooled_group_id
    - state: resource_state
    - type: resource_type
    - uuid: resource_uuid
    - links: links

**Example list of Pooled Resources:**

.. literalinclude:: mockup/resources-list-response.json
   :language: javascript


List Pooled Resource Details
=============================

.. rest_method::  GET /v1/pooled/{resource_ident}

Shows details for a pooled resources.
This will return the full representation of the resources

Normal response codes: 200

Error response codes: badRequest(400), unauthorized(401), forbidden(403)

Request
-------

.. rest_parameters:: parameters.yaml

    - resources_ident: resource_uuid
    - fields: fields

Response
--------

.. rest_parameters:: parameters.yaml

    - uuid: resource_uuid
    - pooled_group_id: pooled_group_id
    - state: resource_state
    - health_status: resource_health_status
    - entity_type: resource_type
    - entity_link: resource_link
    - entity_capability: resource_entity_capability
    - links: links

**Example JSON representation of a resource entity:**

.. literalinclude:: mockup/resources-get-response.json
   :language: javascript
