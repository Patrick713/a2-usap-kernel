cmd_sound/soc/bcm/snd-soc-hifiberry-dacplusadc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o sound/soc/bcm/snd-soc-hifiberry-dacplusadc.ko sound/soc/bcm/snd-soc-hifiberry-dacplusadc.o sound/soc/bcm/snd-soc-hifiberry-dacplusadc.mod.o;  true