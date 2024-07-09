// Copyright (c) 2022 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "paddle/common/macros.h"

namespace phi {
namespace distributed {

class CommContext {
 public:
  CommContext(int rank, int size) : rank_(rank), size_(size) {}
  virtual ~CommContext() = default;

  int GetRank() const { return rank_; }
  int GetSize() const { return size_; }

 protected:
  int rank_;
  int size_;

 private:
  DISABLE_COPY_AND_ASSIGN(CommContext);
};

}  // namespace distributed
}  // namespace phi