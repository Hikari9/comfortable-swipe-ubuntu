#ifndef __COMFORTABLE_SWIPE__xdo_gesture_h__
#define __COMFORTABLE_SWIPE__xdo_gesture_h__

/*
Comfortable Swipe
by Rico Tiongson

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

extern "C" {
#include <xdo.h> // xdo_t
}

#ifdef __cplusplus
extern "C" {
#endif

namespace comfortable_swipe {
namespace gesture {
class xdo_gesture {
protected:
  xdo_t *xdo;

public:
  xdo_gesture();
  virtual ~xdo_gesture();
};
} // namespace gesture
} // namespace comfortable_swipe

#ifdef __cplusplus
}
#endif

#endif /* __COMFORTABLE_SWIPE__xdo_gesture_h__ */
