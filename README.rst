..
  Copyright 2020 The Khronos Group Inc.
  SPDX-License-Identifier: CC-BY-4.0

==========================
 DPC++ Language Reference
==========================
 
This document is the source for the `DPC++
<https://software.intel.com/content/www/us/en/develop/tools/oneapi/data-parallel-c-plus-plus.html>`__
language reference. Data Parallel C++ (DPC++) is an open,
standards-based evolution of ISO C++ that incorporates Khronos SYCL*
and community extensions to simplify data parallel programming. DPC++
allows code reuse across hardware targets, and enables high
productivity and performance across CPU, GPU, and FPGA architectures,
while permitting accelerator-specific tuning.

The document is a work in progress. It may be missing descriptions or
entire classes. If you see something wrong, file an issue or submit a
PR to fix it.

Publishing
==========

Commits to dpcpp branch are built by GitHub Actions and published with
`Github Pages <https://oneapi-src.github.io/DPCPP_Reference>`__

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

License
=======

See `LICENSES`

Contribute
==========

See `CONTRIBUTING.rst`

Security
========

See `Guidelines
<https://www.intel.com/content/www/us/en/security-center/default.html>`_.

