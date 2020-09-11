..
  Copyright 2020 The Khronos Group Inc.
  SPDX-License-Identifier: CC-BY-4.0

.. image:: https://readthedocs.org/projects/sycl/badge/?version=latest
	   :target: https://sycl.readthedocs.io/en/latest/?badge=latest
           :alt: Documentation Status

==========================
 DPC++ Language Reference
==========================
 
The document is a work in progress. It may be missing descriptions or
entire classes. If you see something wrong, file an issue or submit a
PR to fix it.

Publishing
==========

Commits to dpcpp branch are built and published at `Github Pages
<https://oneapi-src.github.io/DPCPP_Reference>`__

Prerequisites
=============

The document is built with `Sphinx
<https://www.sphinx-doc.org/en/master>`__ and plugins. To install all
required software on Ubuntu::

   apt-get update -qq
   DEBIAN_FRONTEND=noninteractive xargs -a packages.txt apt-get install -qq
   pip3 install --upgrade --quiet -r requirements.txt

Building
========

To build::

  python doc.py html

To see the document, open build/html/index.html

  
Relationship to SYCL Reference
==============================

This repo is a downstream fork of `SYCL Reference
<https://KhronosGroup/SYCL_Reference>`__. Edits that are not DPC++
specific should go upstream, and then be merged into this repo. If
sycl is a remote that points to the upstream repo, then::

  git checkout dpcpp
  git pull sycl main
  git commit -m 'merge from sycl'
  git push

License and Copyright Markings
==============================

Check if files are missing license/copyright::

  reuse lint

Add license/copyright to a rst file (may require a `patch
<https://github.com/fsfe/reuse-tool/pull/254>`__)::

  reuse addheader -c "Intel Corporation" -l CC-BY-4.0 path/to/file.rst

Add license/copyright to a code example::
  
  reuse addheader -c "Intel Corporation" -l Apache-2.0 path/to/file.cpp
