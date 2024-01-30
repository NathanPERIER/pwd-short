
fs = import('fs')


cpp_flags = [
    cpp_warning_flags
]

l_args = []


executable(
    'pwd-short',
    ['main.cc'],
    dependencies: [],
    cpp_args: cpp_flags,
    link_args: l_args,
    install: true,
	install_dir: fs.expanduser('~/.local/bin'),
    build_by_default: true
)


