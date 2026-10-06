project(
  'lux',
  ['c', 'cpp'],
  version: '1.0.0',
  default_options: [
    'warning_level=3',
    'c_std=c23',
    'cpp_std=c++17',
  ],
)

cmake = import('cmake')

sources = ['src/main.c', '']

inc = include_directories('include')

m_dep = meson.get_compiler('c').find_library('m', required: false)

box3d_proj = cmake.subproject('box3d')
box3d_dep = box3d_proj.dependency('box3d')

raylib_proj = cmake.subproject('raylib')
raylib_dep = raylib_proj.dependency('raylib')

executable(
  'lux',
  sources,
  include_directories: inc,
  dependencies: [m_dep, box3d_dep, raylib_dep],
  install: true,
)