cmd_net/netfilter/xt_helper.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_helper.ko net/netfilter/xt_helper.o net/netfilter/xt_helper.mod.o;  true
