
# pwd-short

## Build and install

```bash
git clone https://github.com/NathanPERIER/pwd-short
cd pwd-short
meson setup build_release --buildtype=release
cd build_release
ninja
ninja install
```

The executable will then be installed in `~/.local/bin` and can be called with the `pwd-short` command, provided the directory is in `$PATH`.

## Examples

| `pwd`                   | `pwd-short`   |
|-------------------------|---------------|
| `/`                     | `/`           |
| `/etc`                  | `/etc`        |
| `/var/log`              | `/v/log`      |
| `/home/user`            | `~`           |
| `/home/user/workspace`  | `~/workspace` |
| `/home/user/.local/bin` | `~/.l/bin`    |


