cmd_net/ipv4/netfilter/ip_tables.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/netfilter/ip_tables.ko net/ipv4/netfilter/ip_tables.o net/ipv4/netfilter/ip_tables.mod.o;  true