cmd_drivers/media/dvb-core/dvb-core.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/dvb-core/dvb-core.ko drivers/media/dvb-core/dvb-core.o drivers/media/dvb-core/dvb-core.mod.o;  true
