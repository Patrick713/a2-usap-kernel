cmd_drivers/net/ppp/ppp_generic.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/ppp/ppp_generic.ko drivers/net/ppp/ppp_generic.o drivers/net/ppp/ppp_generic.mod.o;  true