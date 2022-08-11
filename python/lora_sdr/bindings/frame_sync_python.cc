/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(frame_sync.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b78473afab7fd6d6e146565506fee1ab) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/lora_sdr/frame_sync.h>
// pydoc.h is automatically generated in the build directory
#include <frame_sync_pydoc.h>

void bind_frame_sync(py::module &m) {

  using frame_sync = ::gr::lora_sdr::frame_sync;

  py::class_<frame_sync, gr::block, gr::basic_block,
             std::shared_ptr<frame_sync>>(m, "frame_sync", D(frame_sync))

      .def(py::init(&frame_sync::make), py::arg("center_freq"),
           py::arg("bandwidth"), py::arg("sf"), py::arg("impl_head"),
           py::arg("sync_word"), py::arg("os_factor"), D(frame_sync, make))

      ;
}
