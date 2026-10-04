project('lux', 'c',
  version : '1.0.0',
  default_options : ['warning_level=3', 'c_std=c23']
)

sources = [
  'src/main.c',
  'src/utils.c'
]

inc = include_directories('include')

m_dep = meson.get_compiler('c').find_library('m', required : false)

executable('my_app',
  sources,
  include_directories : inc,
  dependencies : [m_dep],
  install : true
)
