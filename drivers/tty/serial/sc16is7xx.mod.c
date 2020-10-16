#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x766ef64a, "uart_unregister_driver" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xf3a8c957, "uart_register_driver" },
	{ 0x5192d47f, "spi_get_device_id" },
	{ 0x14cfded6, "__devm_regmap_init_spi" },
	{ 0x6663995b, "spi_setup" },
	{ 0xac511bf1, "__devm_regmap_init_i2c" },
	{ 0x59c7dbe, "device_get_match_data" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x44c9c942, "uart_add_one_port" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x844228a5, "gpiochip_add_data_with_key" },
	{ 0x96c65615, "sched_setscheduler" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0xfef6eb57, "__kthread_init_worker" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd77f2380, "devm_clk_get" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x90dd5c00, "do_SAK" },
	{ 0x43adaa1, "tty_flip_buffer_push" },
	{ 0x6999c3a4, "uart_insert_char" },
	{ 0x7a16358, "regmap_raw_read" },
	{ 0x52afd98, "gpiochip_get_data" },
	{ 0xd3b76748, "uart_update_timeout" },
	{ 0x6179efe8, "uart_get_baud_rate" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x33224d9a, "uart_write_wakeup" },
	{ 0x675ce85, "regmap_raw_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xffec62c6, "kthread_queue_work" },
	{ 0xbe1936a0, "regcache_cache_bypass" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2310788c, "gpiochip_remove" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0x30c484e6, "kthread_flush_worker" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdcf04205, "uart_remove_one_port" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-spi,regmap-i2c");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "83186E31B0195B6CB991A5B");
