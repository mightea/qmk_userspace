# Personal QMK userspace

This is a personal userspace repo for [QMK](https://github.com/qmk/qmk_firmware) keyboard firmware. This organization allows keeping all user keymaps self-contained in one folder rather than split across userspace and keyboard folders. Please see the README of the linked repo for more details.

To build firmware for keyboards, symbolic link a local copy or directly clone this repo into `<qmk_firmware>/users` dir. Build with:

```sh
qmk compile users/mightea/<keyboard>.json
```
Build with Docker:
```sh
docker run -it --rm -w="/qmk_firmware" \
    -v $(dirname $PWD)/qmk_firmware:/qmk_firmware \
    -v $(dirname $PWD)/qmk_userspace:/qmk_userspace \
    qmkfm/qmk_cli /bin/bash
```