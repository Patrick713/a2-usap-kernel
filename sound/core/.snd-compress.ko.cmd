cmd_sound/core/snd-compress.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o sound/core/snd-compress.ko sound/core/snd-compress.o sound/core/snd-compress.mod.o;  true