cmd_net/netfilter/ipset/ip_set.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/ipset/ip_set.ko net/netfilter/ipset/ip_set.o net/netfilter/ipset/ip_set.mod.o;  true