cmd_sound/core/snd-seq-device.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o sound/core/snd-seq-device.ko sound/core/snd-seq-device.o sound/core/snd-seq-device.mod.o;  true
