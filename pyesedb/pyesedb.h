/*
 * Python bindings for libesedb (pyesedb)
 *
 * Copyright (c) 2009-2014, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYESEDB_H )
#define _PYESEDB_H

#include <common.h>
#include <types.h>

#include "pyesedb_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

PyObject *pyesedb_get_version(
           PyObject *self,
           PyObject *arguments );

PyObject *pyesedb_check_file_signature(
           PyObject *self,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyesedb_check_file_signature_file_object(
           PyObject *self,
           PyObject *arguments,
           PyObject *keywords );

PyMODINIT_FUNC initpyesedb(
                void );

#if defined( __cplusplus )
}
#endif

#endif
