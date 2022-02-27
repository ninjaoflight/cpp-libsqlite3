#################################################################
# SQLite3pp Implementation configuration
#################################################################

## Implementation configuration

cpp_libsqlite3_private_incl = []
cpp_libsqlite3_private_srcs = []
cpp_libsqlite3_private_args = []
cpp_libsqlite3_private_link = []
cpp_libsqlite3_private_deps = [
    sqlite3_dep
]

## Add Shared Configuration

cpp_libsqlite3_private_incl += cpp_libsqlite3_shared_incl
cpp_libsqlite3_private_args += cpp_libsqlite3_shared_args
cpp_libsqlite3_private_deps += cpp_libsqlite3_shared_deps

## Implementation static library

cpp_libsqlite3_private_lib = static_library('sqlite3pp-core',
                                    cpp_libsqlite3_private_srcs,
                                    include_directories: cpp_libsqlite3_private_incl,
                                    link_with: cpp_libsqlite3_private_link,
                                    cpp_args: cpp_libsqlite3_private_args,
                                    dependencies: cpp_libsqlite3_private_deps)
