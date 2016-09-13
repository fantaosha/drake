#pragma once

namespace drake {

constexpr int kQuaternionSize = 4;

constexpr int kSpaceDimension = 3;

constexpr int kRpySize = 3;

/// https://en.wikipedia.org/wiki/Screw_theory#Twist
constexpr int kTwistSize = 6;

constexpr int kHomogeneousTransform = 16;

const int kRotmatSize = kSpaceDimension * kSpaceDimension;
}  // namespace drake
