cpp_libsqlite3_incl = include_directories('include')

cpp_libsqlite3_srcs = []
cpp_libsqlite3_args = []
cpp_libsqlite3_link = []
cpp_libsqlite3_deps = []

cpp_libsqlite3_lib = library('sqlite3pp',
                        cpp_libsqlite3_srcs,
                        include_directories : [cpp_libsqlite3_incl],
                        cpp_args: cpp_libsqlite3_args,
                        dependencies : cpp_libsqlite3_deps)

cpp_libsqlite3_dep = declare_dependency(
    link_with: cpp_libsqlite3_lib,
    include_directories: cpp_libsqlite3_incl,
)
