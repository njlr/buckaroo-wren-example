include_defs('//BUCKAROO_DEPS')

cxx_binary(
  name = 'buckaroo-wren-example',
  header_namespace = 'buckaroo-wren-example',
  srcs = glob([
    'buckaroo-wren-example/src/**/*.cpp',
  ]),
  headers = subdir_glob([
    ('buckaroo-wren-example/include', '**/*.hpp'),
    ('buckaroo-wren-example/include', '**/*.h'),
  ]),
  deps = BUCKAROO_DEPS,
)

