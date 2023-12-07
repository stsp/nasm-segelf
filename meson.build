project('nasm-segelf', 'c', version: '2.17')

mod = import('unstable-external_project')

find_program('perl')
p = mod.add_project('configure',
  configure_options : [
    '--prefix=@PREFIX@'
  ],
  verbose: true
)
run_command(
  'make', '-C', meson.current_build_dir() / 'build',
  check: true
)
NASM_SEGELF = find_program(meson.current_build_dir() / 'build/nasm-segelf')
meson.override_find_program('nasm-segelf', NASM_SEGELF)
