// Copyright 2015 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED.

#ifndef TPM_MANAGER_COMMON_PRINT_LOCAL_DATA_PROTO_H_
#define TPM_MANAGER_COMMON_PRINT_LOCAL_DATA_PROTO_H_

#include <string>

#include "tpm_manager/common/local_data.pb.h"

namespace tpm_manager {

std::string GetProtoDebugStringWithIndent(const LocalData& value,
                                          int indent_size);
std::string GetProtoDebugString(const LocalData& value);

}  // namespace tpm_manager

#endif  // TPM_MANAGER_COMMON_PRINT_LOCAL_DATA_PROTO_H_
