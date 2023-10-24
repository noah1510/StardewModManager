project(
  'StardewModManager',
  'cpp',
  version : '0.1',
  default_options : [
    'warning_level=3',
    'cpp_std=c++20'
  ],
  meson_version : '>= 1.1.0',
)

incdir = include_directories('include')

sources = [
    'src/main.cpp',
    'src/bootstrap.cpp',
    'src/MainWindow.cpp',
]

deps = [
    dependency('nlohmann_json', required: true),
    dependency('simplegl', required: true),
]
           
executable(
    'StardewModManager', 
    sources,
    include_directories : incdir,
    dependencies: deps,
    install : true,
)
