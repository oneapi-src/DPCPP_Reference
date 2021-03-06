// Copyright (c) 2011-2020 The Khronos Group, Inc.
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

namespace sycl {
class platform {
 public:
  platform();

  template <typename DeviceSelector>
  explicit platform(const DeviceSelector &deviceSelector);

  /* -- common interface members -- */

  backend get_backend() const;

  std::vector<device> get_devices(
    info::device_type = info::device_type::all) const;

  template <info::platform param>
  typename info::param_traits<info::platform, param>::return_type get_info() const;

  template <typename BackendEnum, BackendEnum param>
  typename info::param_traits<BackendEnum, param>::return_type
  get_backend_info() const;

  bool has(aspect asp) const;

  bool has_extension(const std::string &extension) const; // Deprecated

  bool is_host() const;

  static std::vector<platform> get_platforms();
};
}  // namespace sycl
