#################################################################
# Shared configuration between the implementation and the API
#################################################################

## Public and private includes
cpp_libsqlite3_public_incl = include_directories('public/include')
cpp_libsqlite3_private_incl = include_directories('private/include')
## Shared includes
cpp_libsqlite3_shared_incl = [
]
cpp_libsqlite3_shared_args = []
# all non public libraries should be wrapped in the implementation
cpp_libsqlite3_shared_libs = []
cpp_libsqlite3_shared_deps = []

# all shared includes should be in the shared directory
#subdir('shared')
subdir('private')
subdir('public')


sqlite3pp_dep = declare_dependency(
                    link_with: cpp_libsqlite3_lib,
                    include_directories: cpp_libsqlite3_public_incl)
