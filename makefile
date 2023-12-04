all: draw-keymaps

draw-keymaps:
	rm -f drawing/crkbd.svg
	keymap -c drawing/draw_config.yaml parse -q crkbd.json --layer-names BASE SYM NAV NUM FUN IDE MED > drawing/crkbd.yaml
	keymap -c drawing/draw_config.yaml draw drawing/crkbd.yaml -k 'corne_rotated' -l 'LAYOUT_split_3x5_3' > drawing/crkbd.svg

clean:
	rm -f drawing/crkbd.svg

.PHONY: clean