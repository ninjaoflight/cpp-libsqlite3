#################################################################
# SQLite3pp API configuration
#################################################################

## API configuration

cpp_libsqlite3_public_incl = []
cpp_libsqlite3_public_srcs = []
cpp_libsqlite3_public_args = []
cpp_libsqlite3_public_link = []
cpp_libsqlite3_public_deps = []

## Add Shared Configuration

cpp_libsqlite3_private_incl += cpp_libsqlite3_shared_incl
cpp_libsqlite3_private_args += cpp_libsqlite3_shared_args
cpp_libsqlite3_private_deps += cpp_libsqlite3_shared_deps

### API Library

cpp_libsqlite3_lib = library(
                        'sqlite3pp',
                        cpp_libsqlite3_public_srcs,
                        include_directories: cpp_libsqlite3_public_incl,
                        link_with: cpp_libsqlite3_public_link,
                        cpp_args: cpp_libsqlite3_public_args,
                        dependencies: cpp_libsqlite3_public_deps)

