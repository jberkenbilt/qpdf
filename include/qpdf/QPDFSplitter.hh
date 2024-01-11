// Copyright (c) 2005-2024 Jay Berkenbilt
//
// This file is part of qpdf.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied. See the License for the specific language governing permissions and limitations under
// the License.
//
// Versions of qpdf prior to version 7 were released under the terms of version 2.0 of the Artistic
// License. At your option, you may continue to consider qpdf to be licensed under those terms.
// Please see the manual for additional information.

#ifndef QPDFSPLITTER_HH
#define QPDFSPLITTER_HH

// Until QPDFAssembler and QPDFSplitter are included in the public API, QPDFASSEMBLER_PREVIEW must
// be defined to use this object. Packagers should never set this. Until it is on by default, the
// API and ABI are unstable. When ready to make public, remove this comment and ifdef, the matching
// endif, and the line in CMakeLists.txt that turns it on for the qpdf internal build.
#ifdef QPDFASSEMBLER_PREVIEW

# include <qpdf/DLL.h>
# undef QPDF_DLL  // protect ABI while QPDFASSEMBLER_PREVIEW is set
# define QPDF_DLL // protect ABI while QPDFASSEMBLER_PREVIEW is set

# include <memory>

class QPDFSplitter
{
  public:
    QPDF_DLL
    QPDFSplitter();

  private:
    class Members
    {
        friend class QPDFSplitter;

      public:
        QPDF_DLL
        ~Members() = default;

      private:
        Members();
        Members(Members const&) = delete;
    };
    std::unique_ptr<Members> m;
};

#endif // QPDFASSEMBLER_PREVIEW
#endif // QPDFSPLITTER_HH
