load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_test")

cc_test(
    name = "tests",
    srcs = glob(["**/*.cpp"]),
    deps = [
        "//src/lib:Helloworld",
        "@com_google_googletest//:gtest_main",
    ],
)