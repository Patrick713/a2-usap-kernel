cmd_sound/drivers/snd-virmidi.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o sound/drivers/snd-virmidi.ko sound/drivers/snd-virmidi.o sound/drivers/snd-virmidi.mod.o;  true