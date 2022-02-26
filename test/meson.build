test_sources = [
    'source.cpp',
    'tests/SimpleTest.cpp',
]

test_dependencies = [
    catch2_dep,
    cpp_libsqlite3_dep,
]

testexe = executable('testexe', test_sources,
                     dependencies: test_dependencies)

test_args = []

test('libSQLite3 unit tests', testexe, args: test_args)