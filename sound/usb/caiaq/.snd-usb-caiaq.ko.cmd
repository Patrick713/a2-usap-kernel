cmd_sound/usb/caiaq/snd-usb-caiaq.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o sound/usb/caiaq/snd-usb-caiaq.ko sound/usb/caiaq/snd-usb-caiaq.o sound/usb/caiaq/snd-usb-caiaq.mod.o;  true