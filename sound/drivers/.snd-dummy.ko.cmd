cmd_sound/drivers/snd-dummy.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o sound/drivers/snd-dummy.ko sound/drivers/snd-dummy.o sound/drivers/snd-dummy.mod.o;  true