# https://bazel.build/reference/be/c-cpp

cc_test(
  name = "cpp-tutorial-examples-test",
  srcs = glob(["**/*.cc"]),
  deps = [
    "//src/libs:cpp-tutorial-examples-lib",
    "@gtest//:gtest_main"
    ],
)